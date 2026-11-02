/* Module: 14_43260.dll
   Function: FUN_10001400
   Address: 10001400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10001400(void *this,undefined4 *param_1,uint param_2,int param_3,uint *param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_100029c0(this,param_1,param_2,param_3,(short *)&param_5);
  if (param_4 != (uint *)0x0) {
    if (iVar1 == 0) {
      *param_4 = param_5 & 0xffff;
      return;
    }
    *param_4 = 0;
  }
  return;
}


