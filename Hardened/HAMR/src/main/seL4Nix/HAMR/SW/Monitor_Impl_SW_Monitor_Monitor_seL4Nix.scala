// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object Monitor_Impl_SW_Monitor_Monitor_seL4Nix {
  // returns T if seL4's Observed port is empty, F otherwise 
  def Observed_IsEmpty(): B = $

  // returns result of dequeuing seL4's Observed port 
  def Observed_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's Output port
  def Output_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's Alert port
  def Alert_Send(d: DataContent): Unit = $
}
