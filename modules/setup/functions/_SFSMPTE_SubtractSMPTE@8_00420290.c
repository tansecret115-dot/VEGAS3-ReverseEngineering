/* Module: Setup.exe
   Function: _SFSMPTE_SubtractSMPTE@8
   Address: 00420290
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_SubtractSMPTE_8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x20290  75  _SFSMPTE_SubtractSMPTE@8 */
  iVar1 = _SFSMPTE_SMPTEToFrameCount_4(param_1);
  iVar2 = _SFSMPTE_SMPTEToFrameCount_4(param_2);
  iVar1 = iVar1 - iVar2;
  piVar3 = param_1;
  switch(*param_1) {
  case 1:
  case 5:
    piVar3 = (int *)0x278d00;
    break;
  case 2:
    piVar3 = (int *)0x2782df;
    break;
  case 3:
    piVar3 = (int *)0x20f580;
    break;
  case 4:
    piVar3 = (int *)0x1fa400;
  }
  if (-1 < iVar1) {
    _SFSMPTE_FrameCountToSMPTE_8(param_1,iVar1 % (int)piVar3);
    return;
  }
  _SFSMPTE_FrameCountToSMPTE_8(param_1,(int)piVar3 - -iVar1 % (int)piVar3);
  return;
}


