/* Module: mp3plug.dll
   Function: FUN_5f71e000
   Address: 5f71e000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f71e000(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)param_1 + 0x18);
  uVar4 = 0;
  while( true ) {
    uVar2 = FUN_5f714080(param_1,2);
    iVar1 = *(int *)((int)this + 8);
    if ((*(uint *)(uVar4 * 0x10 + *(int *)(&DAT_5f7697a4 + *(int *)(iVar1 + 4) * 8) + uVar2 * 4) &
        0xff00) != 0) break;
    uVar4 = (uint)*(byte *)(uVar4 * 0x10 +
                           *(int *)(&DAT_5f7697a4 + *(int *)(iVar1 + 4) * 8) + uVar2 * 4);
  }
  iVar3 = (*(uint *)(uVar4 * 0x10 + *(int *)(&DAT_5f7697a4 + *(int *)(iVar1 + 4) * 8) + uVar2 * 4)
           >> 8 & 0xff) - (*(int *)((int)param_1 + 0x18) - iVar3);
  *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - iVar3;
  *(uint *)((int)param_1 + 0x1c) =
       iVar3 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
  *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + iVar3;
  *(uint *)((int)this + 4) =
       (uint)*(byte *)(uVar4 * 0x10 +
                      *(int *)(&DAT_5f7697a4 + *(int *)(*(int *)((int)this + 8) + 4) * 8) +
                      uVar2 * 4);
  return 1;
}


