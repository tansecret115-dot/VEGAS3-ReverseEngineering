/* Module: rmto3260.dll
   Function: FUN_662dc320
   Address: 662dc320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dc320(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 local_5c [22];
  undefined2 local_46;
  undefined4 local_3c;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_1a;
  
  iVar2 = 0;
  pbVar1 = FUN_662d8ec0(local_5c,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    iVar2 = -0x7ffbff7f;
  }
  if (-1 < iVar2) {
    *(undefined2 *)((int)this + 0x25) = local_34;
    *(undefined2 *)((int)this + 0x27) = local_32;
    *(undefined2 *)((int)this + 0x29) = local_46;
    *(undefined4 *)((int)this + 0x21) = local_3c;
    *(undefined4 *)((int)this + 8) = local_1a;
    *(undefined1 *)((int)this + 0xc) = 0;
  }
  return iVar2;
}


