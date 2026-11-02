/* Module: erv33260.dll
   Function: FUN_67083020
   Address: 67083020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67083020(void *this,int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 * 0xc;
  iVar1 = param_1 * 0x10;
  iVar2 = *(int *)(*(int *)((int)this + 0x90) + iVar1);
  iVar2 = (**(code **)((int)this + 600))
                    (*(int *)(*(int *)((int)this + 0x5c) + 4) + iVar2,
                     *(int *)(*(int *)((int)this + 0x68) + 4) + iVar2,
                     *(undefined4 *)((int)this + 0x9c),
                     *(undefined1 *)(*(int *)((int)this + 0x8c) + 5 + iVar4),(int)&param_1 + 3,
                     param_3);
  iVar5 = 0x10;
  *param_2 = iVar2 + (uint)(byte)(&DAT_67091278)[*(byte *)(*(int *)((int)this + 0x8c) + 4 + iVar4)]
                     * 2;
  iVar2 = *(int *)(*(int *)((int)this + 0x90) + 8 + iVar1);
  piVar3 = (int *)((int)this + 0x16c);
  do {
    *(undefined1 *)(iVar2 + *(int *)((int)this + 0x84)) = param_1._3_1_;
    iVar2 = iVar2 + *piVar3;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar5 != 0);
  return;
}


