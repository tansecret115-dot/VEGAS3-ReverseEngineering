/* Module: vegas30k.dll
   Function: _SFSMPTE_SubtractSMPTE@8
   Address: 0107c170
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_SubtractSMPTE_8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x7c170  711  _SFSMPTE_SubtractSMPTE@8 */
  iVar1 = _SFSMPTE_SMPTEToFrameCount_4(param_1);
  iVar2 = _SFSMPTE_SMPTEToFrameCount_4(param_2);
  iVar1 = iVar1 - iVar2;
  puVar3 = param_1;
  switch(*param_1) {
  case 1:
  case 5:
    puVar3 = (undefined4 *)0x278d00;
    break;
  case 2:
    puVar3 = (undefined4 *)0x2782df;
    break;
  case 3:
    puVar3 = (undefined4 *)0x20f580;
    break;
  case 4:
    puVar3 = (undefined4 *)0x1fa400;
  }
  if (-1 < iVar1) {
    _SFSMPTE_FrameCountToSMPTE_8(param_1,iVar1 % (int)puVar3);
    return;
  }
  _SFSMPTE_FrameCountToSMPTE_8(param_1,(int)puVar3 - -iVar1 % (int)puVar3);
  return;
}


