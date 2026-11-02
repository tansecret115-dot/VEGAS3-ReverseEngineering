/* Module: encn3260.dll
   Function: FUN_6648da00
   Address: 6648da00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6648da00(void *this,uint param_1,uint *param_2,uint *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
    if (uVar1 != 0) {
      uVar2 = FUN_66496440(*(void **)(uVar1 + 0x16),param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}


