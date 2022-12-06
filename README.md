# BriefCASE-Tutorial

As part of DARPA's Cyber Assured Systems Engineering (CASE) program, our team has developed a model-based systems engineering environment called BriefCASE that integrates formal methods at all levels of system design, including the ability to build systems targeting seL4.  

In this hands-on session we will provide a top to bottom demonstration of the tools, transforming a system model to address cyber requirements, verifying the correctness of the model, generating component implementations from formal specifications, generating infrastructure code to run on seL4, automatically producing an assurance case documenting the design rationale, and running the final system in emulation on QEMU.  

The virtual machine containing all necessary tools and models should be installed before the session. 

- The BriefCASE environment is packaged in a virtual machine and requires VirtualBox v6.1.8 or above to run
  - VirtualBox can be downloaded from https://www.virtualbox.org/
- The BriefCASE VM (~ 9 GB) can be downloaded here:
  - https://ca-trustedsystems-dev-us-east-1.s3.amazonaws.com/CASE/case-tutorial.ova.gpg
- The case-tutorial.ova.gpg file can be decrypted using a GnuPG decryption tool such as 
  - Gnupg4win (https://www.gpg4win.org/download.html)
  - Decryption password:  ask instructor
- Import the case-tutorial.ova in VirtualBox and start the VM
  - The Debian guest OS login username and password are both:  vagrant
  - Once the Debian guest OS has booted, open a terminal and launch BriefCASE by entering:  briefcase&
- Open the "Initial" project (in the AADL Navigator pane on the left-hand side of the IDE)
  - The project contains the BriefCASE tutorial walk-through
  - Get started!
