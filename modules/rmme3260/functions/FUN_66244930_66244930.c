/* Module: rmme3260.dll
   Function: FUN_66244930
   Address: 66244930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66244930(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0x3f);
  for (iVar3 = 0x231; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x46f) = 0xff00ff;
  *(undefined4 *)((int)this + 0x473) = 0xff00ff;
  *(undefined4 *)((int)this + 0x477) = 0x7e;
  if (*(int *)((int)this + 0x92f) != 0) {
    *(undefined4 *)((int)this + 0x477) = 0x17e;
  }
  *(undefined4 *)((int)this + 0x47b) = 0;
  *(undefined4 *)((int)this + 0x487) = 0;
  if ((param_1[4] == 0) || (param_1[4] == 3)) {
    iVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1];
    iVar3 = -(((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) + 3U & 0xfffffffc);
  }
  else {
    iVar3 = param_1[1];
  }
  *(int *)((int)this + 0x46b) = iVar3;
  *(undefined4 *)((int)this + 0x43) = *param_1;
  *(undefined4 *)((int)this + 0x47) = param_1[1];
  *(undefined4 *)((int)this + 0x4b) = param_1[2];
  *(undefined2 *)((int)this + 0x4f) = *(undefined2 *)(param_1 + 3);
  *(undefined2 *)((int)this + 0x51) = *(undefined2 *)((int)param_1 + 0xe);
  *(undefined4 *)((int)this + 0x53) = param_1[4];
  *(undefined4 *)((int)this + 0x57) = param_1[5];
  *(undefined4 *)((int)this + 0x5b) = param_1[6];
  *(undefined4 *)((int)this + 0x5f) = param_1[7];
  *(undefined4 *)((int)this + 99) = param_1[8];
  *(undefined4 *)((int)this + 0x67) = param_1[9];
  *(undefined4 *)((int)this + 0x6b) = param_1[10];
  *(undefined4 *)((int)this + 0x6f) = param_1[0xb];
  *(undefined4 *)((int)this + 0x73) = param_1[0xc];
  piVar1 = (int *)(*(int *)((int)this + 0x3b) + 8);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(piVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x3f) = *puVar2;
  }
  FUN_66245420(*(int **)((int)this + 0xc));
  FUN_66244a50();
  *(byte *)((int)this + 0x26) = *(byte *)((int)this + 0x26) | 1;
  return;
}


