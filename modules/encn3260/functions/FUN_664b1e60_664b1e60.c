/* Module: encn3260.dll
   Function: FUN_664b1e60
   Address: 664b1e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b1e60(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  byte local_8 [4];
  
  if ((*(int *)((int)this + 0x49a) == 0) && (*(int *)((int)this + 0x49e) == 0)) {
    iVar1 = FUN_664aaa70(*(int *)((int)this + 0x3a));
    FUN_664b3690(iVar1);
    iVar1 = FUN_664b6180((uint *)(iVar1 + 0x48),(uint *)local_8,&local_10,&local_c);
    if (iVar1 == 0) {
      if (((((local_8[0] & 1) != 0) && (param_1 != 0)) ||
          (((local_8[0] & 4) != 0 && (param_1 == 0)))) &&
         ((&PTR_DAT_664e3908)[*(int *)((int)this + 0x4e)] != (undefined *)0x0)) {
        uVar2 = 0;
        while( true ) {
          iVar1 = FUN_664b1f30(this,param_1,
                               *(int *)((&PTR_DAT_664e3908)[*(int *)((int)this + 0x4e)] + uVar2),
                               *(uint *)(*(int *)((int)this + 0x42) + 4),
                               *(uint *)(*(int *)((int)this + 0x42) + 8));
          if (iVar1 == 0) break;
          uVar2 = uVar2 + 4;
          if (0xf < uVar2) {
            return;
          }
        }
        *(undefined4 *)((int)this + 0x4ea) = 0;
      }
    }
  }
  return;
}


