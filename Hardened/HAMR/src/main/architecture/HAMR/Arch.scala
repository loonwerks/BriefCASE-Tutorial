// #Sireum

package HAMR

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver : HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationResponse", mode = EventOut)
    val AttestationTesterResponse = Port[Base_Types.Bits] (id = 3, name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationTesterResponse", mode = EventIn)
    val AttestationTesterRequest = Port[Base_Types.Bits] (id = 4, name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationTesterRequest", mode = EventOut)

    HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      AttestationTesterResponse = AttestationTesterResponse,
      AttestationTesterRequest = AttestationTesterRequest
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner : HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 5, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)
    val FlightPlan = Port[Base_Types.Bits] (id = 6, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)

    HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
      id = 1,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      FlightPlan = FlightPlan
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightController_FlightController : HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge = {
    val FlightPlan = Port[Base_Types.Bits] (id = 7, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_FlightPlan", mode = EventIn)
    val Alert = Port[art.Empty] (id = 8, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_Alert", mode = EventIn)

    HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge(
      id = 2,
      name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager : HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge = {
    val AttestationRequest = Port[Base_Types.Bits] (id = 9, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[Base_Types.Bits] (id = 10, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[Base_Types.Bits] (id = 11, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_TrustedIds", mode = EventOut)

    HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge(
      id = 3,
      name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate : HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge = {
    val MissionCommand_in = Port[Base_Types.Bits] (id = 12, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[Base_Types.Bits] (id = 13, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[Base_Types.Bits] (id = 14, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge(
      id = 4,
      name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_Filter_Filter : HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge = {
    val Input = Port[Base_Types.Bits] (id = 15, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Input", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 16, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Output", mode = EventOut)

    HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge(
      id = 5,
      name = "MissionComputer_Impl_Instance_SW_Filter_Filter",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }
  val MissionComputer_Impl_Instance_SW_Monitor_Monitor : HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 17, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Observed", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 18, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Output", mode = EventOut)
    val Alert = Port[art.Empty] (id = 19, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Alert", mode = EventOut)

    HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge(
      id = 6,
      name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed,
      Output = Output,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester : HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge = {
    val AttestationRequest = Port[Base_Types.Bits] (id = 20, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 21, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationResponse", mode = EventOut)

    HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge(
      id = 7,
      name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }

  val ad : ArchitectureDescription = {
    TranspilerUtil.touch()

    ArchitectureDescription(
      components = ISZ (MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver, MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner, MissionComputer_Impl_Instance_SW_FlightController_FlightController, MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager, MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate, MissionComputer_Impl_Instance_SW_Filter_Filter, MissionComputer_Impl_Instance_SW_Monitor_Monitor, MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester),

      connections = ISZ (Connection(from = MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.MissionCommand, to = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.MissionCommand_in),
                         Connection(from = MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.AttestationResponse, to = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.AttestationResponse),
                         Connection(from = MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.AttestationTesterRequest, to = MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester.AttestationRequest),
                         Connection(from = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.FlightPlan, to = MissionComputer_Impl_Instance_SW_Monitor_Monitor.Observed),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.AttestationRequest, to = MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.AttestationRequest),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.TrustedIds, to = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.TrustedIds),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.MissionCommand_out, to = MissionComputer_Impl_Instance_SW_Filter_Filter.Input),
                         Connection(from = MissionComputer_Impl_Instance_SW_Filter_Filter.Output, to = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_SW_Monitor_Monitor.Output, to = MissionComputer_Impl_Instance_SW_FlightController_FlightController.FlightPlan),
                         Connection(from = MissionComputer_Impl_Instance_SW_Monitor_Monitor.Alert, to = MissionComputer_Impl_Instance_SW_FlightController_FlightController.Alert),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester.AttestationResponse, to = MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.AttestationTesterResponse))
    )
  }
}

object TranspilerUtil {
  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch process/thread timing properties
      println(Schedulers.MissionComputer_Impl_Instance_Proc_HW_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_FlightController_FlightController_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_Filter_Filter_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_Monitor_Monitor_timingProperties)
      println(Schedulers.MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_timingProperties)

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      {
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.logError("")
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.put_MissionCommand(Base_Types.Bits_example())
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.put_MissionCommand(Base_Types.Bits_example())
        val apiUsage_AttestationRequest: Option[Base_Types.Bits] = HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.get_AttestationRequest()
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.put_AttestationResponse(Base_Types.Bits_example())
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.put_AttestationResponse(Base_Types.Bits_example())
        val apiUsage_AttestationTesterResponse: Option[Base_Types.Bits] = HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.get_AttestationTesterResponse()
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_initialization_api.get.put_AttestationTesterRequest(Base_Types.Bits_example())
        HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge.c_operational_api.get.put_AttestationTesterRequest(Base_Types.Bits_example())
      }
      {
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logError("")
        val apiUsage_MissionCommand: Option[Base_Types.Bits] = HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.get_MissionCommand()
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.put_FlightPlan(Base_Types.Bits_example())
        HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.put_FlightPlan(Base_Types.Bits_example())
      }
      {
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logError("")
        val apiUsage_FlightPlan: Option[Base_Types.Bits] = HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.get_FlightPlan()
        val apiUsage_Alert: Option[art.Empty] = HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.get_Alert()
      }
      {
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logError("")
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.put_AttestationRequest(Base_Types.Bits_example())
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.put_AttestationRequest(Base_Types.Bits_example())
        val apiUsage_AttestationResponse: Option[Base_Types.Bits] = HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.get_AttestationResponse()
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.put_TrustedIds(Base_Types.Bits_example())
        HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.c_operational_api.get.put_TrustedIds(Base_Types.Bits_example())
      }
      {
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logError("")
        val apiUsage_MissionCommand_in: Option[Base_Types.Bits] = HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_MissionCommand_in()
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.put_MissionCommand_out(Base_Types.Bits_example())
        HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.put_MissionCommand_out(Base_Types.Bits_example())
        val apiUsage_TrustedIds: Option[Base_Types.Bits] = HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_TrustedIds()
      }
      {
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logError("")
        val apiUsage_Input: Option[Base_Types.Bits] = HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.get_Input()
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.put_Output(Base_Types.Bits_example())
        HAMR.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.put_Output(Base_Types.Bits_example())
      }
      {
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
      {
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logInfo("")
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logDebug("")
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logError("")
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logInfo("")
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logDebug("")
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logError("")
        val apiUsage_AttestationRequest: Option[Base_Types.Bits] = HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.get_AttestationRequest()
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.put_AttestationResponse(Base_Types.Bits_example())
        HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.put_AttestationResponse(Base_Types.Bits_example())
      }
    }
  }
}

