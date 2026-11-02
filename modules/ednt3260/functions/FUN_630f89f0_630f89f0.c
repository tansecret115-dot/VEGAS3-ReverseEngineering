/* Module: ednt3260.dll
   Function: FUN_630f89f0
   Address: 630f89f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_630f89f0(void *this,undefined4 *param_1,short param_2,undefined4 *param_3,short param_4,
            undefined4 *param_5)

{
  double *pdVar1;
  
  pdVar1 = (double *)((int)this + 0x60214);
  FUN_630f5c10(param_5,1,(undefined4 *)pdVar1,1,0x500);
  FUN_630f5c10(param_1,param_2,(undefined4 *)((int)this + 0x62a14),1,0x300);
  FUN_630f5c10((undefined4 *)((int)this + 0x61a14),1,param_5,1,0x500);
  FUN_630f3b20(pdVar1,0x400);
  FUN_630f3e30((int)pdVar1,0x400);
  FUN_630f5c60((undefined4 *)pdVar1,(double *)&DAT_630fc028,0x400);
  FUN_630f3cb0(pdVar1,0x400);
  FUN_630f3e30((int)pdVar1,0x400);
  FUN_630f5c10((undefined4 *)((int)this + 0x62a14),1,param_3,param_4,0x300);
  return;
}


