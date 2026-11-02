/* Module: rmto3260.dll
   Function: FUN_662d8e40
   Address: 662d8e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d8e40(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 local_5c [22];
  undefined2 local_46;
  short sStack_34;
  short local_32;
  undefined4 local_1e;
  undefined4 local_1a;
  char local_16;
  
  iVar2 = 0;
  pbVar1 = FUN_662d8ec0(local_5c,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    iVar2 = -0x7ffbff7f;
  }
  if (-1 < iVar2) {
    *(short *)((int)this + 0x46) = local_32;
    *(undefined1 *)((int)this + 0x29) = 0;
    *(short *)((int)this + 0x6a) = sStack_34;
    *(uint *)((int)this + 0xae) = (uint)(local_16 != '\0');
    *(short *)((int)this + 0x48) = sStack_34 * local_32;
    *(undefined4 *)((int)this + 0x25) = local_1e;
    *(undefined2 *)((int)this + 0x70) = local_46;
    *(undefined4 *)((int)this + 0x20) = local_1a;
    *(undefined1 *)((int)this + 0x24) = 0;
  }
  return iVar2;
}


