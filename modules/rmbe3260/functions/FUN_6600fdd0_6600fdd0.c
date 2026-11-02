/* Module: rmbe3260.dll
   Function: FUN_6600fdd0
   Address: 6600fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6600fdd0(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,int *param_7)

{
  undefined4 *puVar1;
  BOOL BVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_6600ff50((int)this);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = operator_new(10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 2);
    }
    *(undefined4 **)((int)this + 0x2c) = puVar1;
    *(ushort *)(puVar1 + 2) = *(ushort *)(puVar1 + 2) & 0xfffd;
    *(undefined4 *)((int)this + 0x4e) = **(undefined4 **)((int)this + 0x2c);
  }
  *(uint *)((int)this + 0x34) = param_3;
  puVar1 = operator_new(param_3);
  *(undefined4 **)((int)this + 0x30) = puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar6 = *(uint *)((int)this + 0x34);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined2 *)((int)this + 0x40) = param_6;
  if ((DAT_66075058 == 0) && (DAT_6607505c == 0)) {
    BVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_66075058);
    if (BVar2 != 0) {
      iVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075060);
      goto joined_r0x6600fedc;
    }
  }
  else {
    iVar3 = QueryPerformanceCounter((LARGE_INTEGER *)&DAT_66075060);
joined_r0x6600fedc:
    if (iVar3 != 0) {
      DVar4 = ftol();
      goto LAB_6600ff32;
    }
  }
  DVar4 = GetTickCount();
LAB_6600ff32:
  *(DWORD *)((int)this + 0x3c) = DVar4;
  if (param_7 != (int *)0x0) {
    FUN_6605b900((void *)((int)this + 0x42),param_7);
  }
  return 0;
}


