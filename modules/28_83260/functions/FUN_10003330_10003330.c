/* Module: 28_83260.dll
   Function: FUN_10003330
   Address: 10003330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10003330(void *this,float *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_10003480(this,10,8,0x14,(float *)((int)this + 0x294),param_1,(float *)&DAT_1000b9f8,
               (float *)&DAT_10008b08,(float *)((int)this + 0x268),0.5625);
  iVar1 = FUN_10001f20((float *)&DAT_1000b9f8,(undefined4 *)&DAT_1000bc48,10);
  if (iVar1 != 0) {
    puVar2 = &DAT_1000bc4c;
    puVar3 = &DAT_1000be3c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_100021c0(0x1000be38,param_2,10,0x10008050);
  }
  return;
}


