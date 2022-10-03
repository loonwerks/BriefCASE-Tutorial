// #Sireum
package HAMR

import org.sireum._
import art.Art
import art.scheduling.legacy.Legacy
import art.scheduling.roundrobin.RoundRobin
import art.scheduling.static.Schedule.{DSchedule, DScheduleSpec, Slot}
import art.scheduling.static.StaticScheduler

// This file was auto-generated.  Do not edit

@datatype class ProcessorTimingProperties(val clockPeriod: Option[Z],
                                          val framePeriod: Option[Z],
                                          val maxDomain: Option[Z],
                                          val slotTime: Option[Z])

@datatype class ThreadTimingProperties(val domain: Option[Z],
                                       val computeExecutionTime: Option[(Z, Z)])

object Schedulers {

  val MissionComputer_Impl_Instance_Proc_HW_timingProperties: ProcessorTimingProperties = ProcessorTimingProperties(
    clockPeriod = Some(2),
    framePeriod = Some(1000),
    maxDomain = Some(10),
    slotTime = None())

  val MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(3))

  val MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(7))

  val MissionComputer_Impl_Instance_SW_FlightController_FlightController_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(9))

  val MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(4))

  val MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(5))

  val MissionComputer_Impl_Instance_SW_Filter_Filter_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(6))

  val MissionComputer_Impl_Instance_SW_Monitor_Monitor_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(8))

  val MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_timingProperties: ThreadTimingProperties = ThreadTimingProperties(
    computeExecutionTime = Some((10, 50)),
    domain = Some(2))

  // roundRobinSchedule represents the component dispatch order
  val roundRobinSchedule: ISZ[art.Bridge] = Arch.ad.components

  val framePeriod: Z = 1000
  val numComponents: Z = Arch.ad.components.size
  val maxExecutionTime: Z = numComponents / framePeriod

  // staticSchedule represents the component dispatch order
  val staticSchedule: DScheduleSpec = DScheduleSpec(0, 0, DSchedule(ISZ(
    Slot(Arch.MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_FlightController_FlightController.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_Filter_Filter.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_Monitor_Monitor.id, maxExecutionTime),
    Slot(Arch.MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester.id, maxExecutionTime)
  )))


  def getRoundRobinScheduler(schedule: Option[ISZ[art.Bridge]]): RoundRobin = {
    if(roundRobinSchedule.isEmpty) {} // line needed for transpiler; do not remove
    schedule match {
      case Some(s) => return RoundRobin(s)
      case _ => return RoundRobin(ScheduleProviderI.getRoundRobinOrder())
    }
  }

  def getStaticScheduler(schedule: Option[DScheduleSpec]): StaticScheduler = {
    if(staticSchedule.schedule.slots.isEmpty) {} // line needed for transpiler; do not remove
    schedule match {
      case Some(s) => return StaticScheduler(Arch.ad.components, s)
      case _ => return StaticScheduler(Arch.ad.components, ScheduleProviderI.getStaticSchedule())
    }
  }

  def getLegacyScheduler(): Legacy = {
    return Legacy(Arch.ad.components)
  }
}

@ext(name = "ScheduleProvider") object ScheduleProviderI {
  def getRoundRobinOrder(): ISZ[art.Bridge] = $
  def getStaticSchedule(): DScheduleSpec = $
}