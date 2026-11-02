/* Module: 28_83260.dll
   Function: FUN_10001c20
   Address: 10001c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10001c20(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10001dc0(10,10,8,0x14,(float *)((int)this + 0x294),param_1,(float *)((int)this + 0x7fc),
               0x10008b08,(float *)((int)this + 0x268),0.5625);
  iVar1 = FUN_10001f20((float *)((int)this + 0x7fc),(undefined4 *)((int)this + 0x854),10);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((int)this + 0x82c);
    iVar1 = 10;
    do {
      *puVar2 = puVar2[0xb];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_100021c0((int)this + 0x828,param_2,10,0x10008020);
  }
  return;
}


