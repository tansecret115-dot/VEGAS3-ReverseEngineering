/* Module: 28_83260.dll
   Function: FUN_100032b0
   Address: 100032b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100032b0(void *this,float *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_10003480(this,0x24,0x28,0x23,(float *)&DAT_1000ba88,param_1,(float *)&DAT_1000c230,
               (float *)&DAT_10008ce0,(float *)((int)this + 0x3f0),0.5625);
  iVar1 = FUN_100035b0((float *)&DAT_1000c230,&DAT_1000bec8);
  if (iVar1 != 0) {
    puVar2 = &DAT_1000bec8;
    puVar3 = &DAT_1000b960;
    for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_100021c0(0x1000b960,param_2,0x24,(int)this + 0x1d4);
  }
  return;
}


