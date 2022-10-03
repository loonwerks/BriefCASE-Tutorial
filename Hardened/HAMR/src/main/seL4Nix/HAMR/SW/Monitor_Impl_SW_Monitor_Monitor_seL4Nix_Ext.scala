package HAMR.SW

import org.sireum._
import art._

object Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Ext {
  def Observed_IsEmpty(): B = halt("stub")

  def Observed_Receive(): Option[DataContent] = halt("stub")

  def Output_Send(d: DataContent): Unit = halt("stub")

  def Alert_Send(d: DataContent): Unit = halt("stub")
}
