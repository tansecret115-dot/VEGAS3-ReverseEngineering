/* Module: erv23260.dll
   Function: FUN_637f4fa0
   Address: 637f4fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f4fa0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 8) == 0x15) || (*(int *)((int)this + 8) == 0x16)) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar5 = *(int *)(param_2 + 0x34);
    iVar4 = puVar1[7];
    uVar2 = puVar1[3];
    uVar3 = puVar1[4];
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar5 = *(int *)(param_2 + 0x34);
    iVar4 = puVar1[7];
    uVar3 = *(uint *)(param_2 + 0x10);
    uVar2 = *(uint *)(param_2 + 0xc);
  }
  FUN_637fe050((undefined4 *)*puVar1,(undefined4 *)puVar1[1],(undefined4 *)puVar1[2],uVar2,uVar3,
               iVar4,iVar4,0,iVar5,0,0);
  return 0;
}


