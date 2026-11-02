/* Module: erv33260.dll
   Function: FUN_67082d20
   Address: 67082d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67082d20(void *this,uint *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  *param_1 = (uint)*(byte *)(*(int *)((int)this + 0x8c) + 5 + param_2 * 0xc);
  param_1[1] = *(uint *)((int)this + 0x9c);
  param_1[2] = *(uint *)((int)this + 0xa8);
  puVar5 = param_1 + 3;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0x1010101;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  if ((*param_1 & 2) == 0) {
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    *(undefined1 *)((int)param_1 + 0x21) = 0;
  }
  param_1[9] = 0;
  bVar1 = (&DAT_67091278)[*(byte *)(*(int *)((int)this + 0x8c) + 4 + param_2 * 0xc)];
  param_1[10] = (uint)bVar1;
  uVar2 = param_1[10];
  uVar3 = (uint)bVar1 * 2;
  param_1[0xb] = uVar3;
  uVar3 = uVar3 + uVar2;
  param_1[0xc] = uVar3;
  uVar3 = uVar3 + uVar2;
  param_1[0xd] = uVar3;
  uVar3 = uVar3 + uVar2;
  param_1[0xe] = uVar3;
  uVar3 = uVar3 + uVar2;
  param_1[0xf] = uVar3;
  uVar3 = uVar3 + uVar2;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar3 + uVar2;
  return;
}


