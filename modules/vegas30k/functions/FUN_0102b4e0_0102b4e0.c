/* Module: vegas30k.dll
   Function: FUN_0102b4e0
   Address: 0102b4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0102b4e0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  uVar3 = 0;
  if (param_2 != 0) {
    iVar1 = _SfPlugIn_FindNode_8(param_2,param_1);
    if (iVar1 != 0) {
      uVar3 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0xc) >> 0x18);
    }
  }
  piVar2 = &DAT_012041e8;
  do {
    iVar1 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = piVar2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return CONCAT31((int3)((uint)piVar2 >> 8),uVar3) | 0x81;
    }
    piVar2 = piVar2 + 4;
    if ((int *)0x12044c7 < piVar2) {
      return CONCAT31((int3)((uint)piVar2 >> 8),uVar3);
    }
  } while( true );
}


