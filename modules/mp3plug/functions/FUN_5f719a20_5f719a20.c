/* Module: mp3plug.dll
   Function: FUN_5f719a20
   Address: 5f719a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f719a20(void *this,undefined4 param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_2 + 0x2c + param_5 * 0xe8 + param_4 * 0x6c) != 2) {
    iVar2 = param_5 * 0x3100;
    iVar1 = *(int *)((int)this + iVar2);
    iVar4 = iVar1 * 0x9cc;
    puVar5 = (undefined4 *)(iVar4 + 0x70 + iVar2 + (int)this);
    for (iVar3 = 0x240; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)this + iVar2 + iVar4 + 0x70) = 0;
    puVar5 = (undefined4 *)(param_5 * 0xe8 + 0x18 + param_4 * 0x6c + param_2);
    puVar6 = (undefined4 *)(iVar4 + 4 + iVar2 + (int)this);
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((int)this + iVar2 + iVar4 + 0x9cc) = 0;
    *(undefined4 *)((int)this + iVar2 + 0x30fc) = 0;
    *(uint *)((int)this + iVar2) =
         (iVar1 + 1) - (((uint)(iVar1 + 1 >> 1) >> 0x1e) + 1 + iVar1 & 0xfffffffc);
  }
  return;
}


