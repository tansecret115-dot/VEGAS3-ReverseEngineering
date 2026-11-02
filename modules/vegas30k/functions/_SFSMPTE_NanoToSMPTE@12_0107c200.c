/* Module: vegas30k.dll
   Function: _SFSMPTE_NanoToSMPTE@12
   Address: 0107c200
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_NanoToSMPTE_12(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
                    /* 0x7c200  707  _SFSMPTE_NanoToSMPTE@12 */
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


