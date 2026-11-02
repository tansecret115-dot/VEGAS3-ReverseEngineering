/* Module: vidcap30.exe
   Function: _SFSMPTE_SMPTEToNanos@4
   Address: 004bbaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SFSMPTE_SMPTEToNanos_4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0xbbaf0  213  _SFSMPTE_SMPTEToNanos@4 */
  switch(*param_1) {
  case 2:
  case 5:
    uVar2 = 0xe2556b28;
    uVar3 = 0x403df853;
    break;
  case 3:
    uVar2 = 0;
    uVar3 = 0x40390000;
    break;
  case 4:
    uVar2 = 0;
    uVar3 = 0x40380000;
    break;
  default:
    uVar2 = 0;
    uVar3 = 0x403e0000;
  }
  uVar1 = _SFSMPTE_SMPTEToFrameCount_4(param_1);
  ftol(uVar2,uVar3,uVar1,0);
  return;
}


