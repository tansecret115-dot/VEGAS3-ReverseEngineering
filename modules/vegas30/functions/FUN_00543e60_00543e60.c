/* Module: vegas30.exe
   Function: FUN_00543e60
   Address: 00543e60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00543e60(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *_Memory;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  puVar2 = *(undefined4 **)((int)param_1 + 8);
  _Memory = calloc(1,0x20);
  if (_Memory == (int *)0x0) {
    return (int *)0x0;
  }
  piVar5 = _Memory;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  _Memory[6] = 1;
  _Memory[2] = -1;
  _Memory[3] = -1;
  iVar4 = _SfDibAlloc_28(_Memory,*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x34),
                         *(undefined4 *)(iVar4 + 0x38),0,0,0);
  if (iVar4 < 0) {
    free(_Memory);
    return (int *)0x0;
  }
  piVar5 = (int *)*_Memory;
  if (piVar5[4] == 0) {
    if (((piVar5[8] != 0) || (uVar1 = *(ushort *)((int)piVar5 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00543eff;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar5[4] == 3) {
      piVar5 = piVar5 + 0xd;
      goto LAB_00543f09;
    }
LAB_00543eff:
    iVar4 = piVar5[8];
  }
  piVar5 = (int *)(*piVar5 + iVar4 * 4 + (int)piVar5);
LAB_00543f09:
  _Memory[1] = (int)piVar5;
  EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
  uVar3 = *puVar2;
  param_1 = _Memory;
  _SfList_InsertList_16(puVar2,uVar3,&param_1,1);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
  return _Memory;
}


