// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{Monitor_Impl_SW_Monitor_Monitor => component}

// This file was auto-generated.  Do not edit

@datatype class Monitor_Impl_SW_Monitor_Monitor_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Observed: Port[Base_Types.Bits],
  Output: Port[Base_Types.Bits],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Observed,
              Output,
              Alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(Observed),

    eventOuts = ISZ(Output,
                    Alert)
  )

  val initialization_api : Monitor_Impl_Initialization_Api = {
    val api = Monitor_Impl_Initialization_Api(
      id,
      Observed.id,
      Output.id,
      Alert.id
    )
    Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Monitor_Impl_Operational_Api = {
    val api = Monitor_Impl_Operational_Api(
      id,
      Observed.id,
      Output.id,
      Alert.id
    )
    Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Monitor_Impl_SW_Monitor_Monitor_Bridge.EntryPoints(
      id,

      Observed.id,
      Output.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Monitor_Impl_SW_Monitor_Monitor_Bridge {

  var c_initialization_api: Option[Monitor_Impl_Initialization_Api] = None()
  var c_operational_api: Option[Monitor_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    Monitor_Impl_SW_Monitor_Monitor_BridgeId : Art.BridgeId,

    Observed_Id : Art.PortId,
    Output_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Monitor_Impl_Initialization_Api,
    operational_api: Monitor_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(Observed_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Output_Id,
                                               Alert_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Monitor_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: Monitor_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Monitor_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Monitor_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Monitor_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Monitor_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Monitor_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}