/* Module: 28_83260.dll
   Function: FUN_100031a0
   Address: 100031a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100031a0(void *this,float *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_10003480(this,10,0x28,0x1e,(float *)((int)this + 0x68),param_1,(float *)&DAT_1000ba58,
               (float *)&DAT_10008ba0,(float *)((int)this + 0x1a8),0.25);
  iVar1 = FUN_10001f20((float *)&DAT_1000ba58,&DAT_1000ba28,10);
  if (iVar1 != 0) {
    puVar2 = &DAT_1000ba28;
    puVar3 = &DAT_1000b930;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_10002150(0x1000b930,param_2,param_3,10,(int)this + 0x10,(int)this + 0x3c);
  }
  return;
}


