/* Module: mp3plug.dll
   Function: FUN_5f7123b4
   Address: 5f7123b4
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_5f7123b4(void *this,float *param_1,int param_2,uint *param_3,int param_4,char *param_5,
            int *param_6)

{
  uint uVar1;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  uVar1 = FUN_5f713740((void *)((int)this + 0x38));
  if (((uVar1 & 0xc0000000) == 0) || ((uVar1 & 0xc0000000) == 0x40000000)) {
    if (param_1 != (float *)0x0) {
      uVar1 = FUN_5f714950((void *)((int)this + 0xcc),param_1,param_2,param_3,param_4,param_5,
                           param_6);
    }
    FUN_5f7122e4(this,uVar1);
  }
  else if (uVar1 == 0x81010004) {
    *(undefined1 *)((int)this + 0xca3c) = 1;
  }
  else if (uVar1 == 0x81010002) {
    FUN_5f7156e0((void *)((int)this + 0xcc),'\x01');
  }
  return uVar1;
}


