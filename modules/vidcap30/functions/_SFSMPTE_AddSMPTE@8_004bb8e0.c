/* Module: vidcap30.exe
   Function: _SFSMPTE_AddSMPTE@8
   Address: 004bb8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_AddSMPTE_8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0xbb8e0  207  _SFSMPTE_AddSMPTE@8 */
  iVar1 = _SFSMPTE_SMPTEToFrameCount_4(param_1);
  iVar2 = _SFSMPTE_SMPTEToFrameCount_4(param_2);
  uVar3 = iVar1 + iVar2;
  switch(*param_1) {
  case 1:
  case 5:
    _SFSMPTE_FrameCountToSMPTE_8(param_1,uVar3 % 0x278d00);
    return;
  case 2:
    uVar3 = uVar3 % 0x2782df;
    break;
  case 3:
    _SFSMPTE_FrameCountToSMPTE_8(param_1,uVar3 % 0x20f580);
    return;
  case 4:
    _SFSMPTE_FrameCountToSMPTE_8(param_1,uVar3 % 0x1fa400);
    return;
  }
  _SFSMPTE_FrameCountToSMPTE_8(param_1,uVar3);
  return;
}


