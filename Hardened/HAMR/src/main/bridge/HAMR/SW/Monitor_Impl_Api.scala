// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait Monitor_Impl_Api {
  def id: Art.BridgeId
  def Observed_Id : Art.PortId
  def Output_Id : Art.PortId
  def Alert_Id : Art.PortId

  def put_Output(value : Base_Types.Bits) : Unit = {
    Art.putValue(Output_Id, Base_Types.Bits_Payload(value))
  }

  def put_Alert() : Unit = {
    Art.putValue(Alert_Id, art.Empty())
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class Monitor_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId,
  val Output_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends Monitor_Impl_Api

@datatype class Monitor_Impl_Operational_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId,
  val Output_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends Monitor_Impl_Api {

  def get_Observed() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(Observed_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Observed.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}
