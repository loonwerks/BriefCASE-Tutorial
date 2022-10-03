// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.Monitor_Impl_SW_Monitor_Monitor

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_seL4Nix

object Monitor extends App {

  val MonitorBridge : HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Observed", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Output", mode = EventOut)
    val Alert = Port[art.Empty] (id = 2, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Alert", mode = EventOut)

    HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed,
      Output = Output,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = MonitorBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Observed: In EventDataPort Base_Types.Bits
  val Observed_id: Art.PortId = MonitorBridge.Observed.id
  var Observed_port: Option[DataContent] = noData

  // Output: Out EventDataPort Base_Types.Bits
  val Output_id: Art.PortId = MonitorBridge.Output.id
  var Output_port: Option[DataContent] = noData

  // Alert: Out EventPort art.Empty
  val Alert_id: Art.PortId = MonitorBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Observed_id) {
      return Observed_port
    } else {
      halt(s"Unexpected: Monitor.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Observed_port = Monitor_Impl_SW_Monitor_Monitor_seL4Nix.Observed_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Output_id) {
      Output_port = Some(data)
    } else if(portId == Alert_id) {
      Alert_port = Some(data)
    } else {
      halt(s"Unexpected: Monitor.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Output_port.nonEmpty) {
      Monitor_Impl_SW_Monitor_Monitor_seL4Nix.Output_Send(Output_port.get)
      Output_port = noData
    }

    if(Alert_port.nonEmpty) {
      Monitor_Impl_SW_Monitor_Monitor_seL4Nix.Alert_Send(Alert_port.get)
      Alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logError("")
      val apiUsage_Observed: Option[Base_Types.Bits] = HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.get_Observed()
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.put_Output(Base_Types.Bits_example())
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.put_Output(Base_Types.Bits_example())
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.put_Alert()
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.put_Alert()
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(MonitorBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(MonitorBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(MonitorBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
