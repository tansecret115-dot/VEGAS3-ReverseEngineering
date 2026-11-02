/* Module: Setup.exe
   Function: _SFSMPTE_NanoToSMPTE@12
   Address: 00420320
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_NanoToSMPTE_12(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
                    /* 0x20320  71  _SFSMPTE_NanoToSMPTE@12 */
  switch(*param_3) {
  case 2:
  case 5:
    break;
  case 3:
    break;
  case 4:
  }
  uVar1 = ftol();
  _SFSMPTE_FrameCountToSMPTE_8(param_3,uVar1);
  return;
}


