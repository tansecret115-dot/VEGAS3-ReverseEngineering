/* Module: sftrkfx1.dll
   Function: FUN_5cbb5650
   Address: 5cbb5650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cbb5650(void *this,ushort *param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 local_64 [25];
  
  *(ushort **)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x30) = 1;
  iVar1 = FUN_5cbb51c0((undefined4 *)((int)this + 0x148),param_1);
  if (-1 < iVar1) {
    FUN_5cba7c70(this,local_64);
    iVar1 = FUN_5cbb5540(this,(int)local_64);
    DVar2 = timeGetTime();
    srand(DVar2 >> 3);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return iVar1;
}


