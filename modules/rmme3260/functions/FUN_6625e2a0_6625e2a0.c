/* Module: rmme3260.dll
   Function: FUN_6625e2a0
   Address: 6625e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6625e2a0(int param_1)

{
  void *this;
  int iVar1;
  undefined2 uVar2;
  
  this = *(void **)(param_1 + 6);
  if (this != (void *)0x0) {
    iVar1 = *(ushort *)(param_1 + 4) - 1;
    uVar2 = (undefined2)((uint)iVar1 >> 0x10);
    switch(iVar1) {
    case 0:
      FUN_6625c7e0(this,*(undefined4 *)(param_1 + 10),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)));
      return 0;
    case 1:
      FUN_6625ca90(this,*(undefined4 *)(param_1 + 0x1a),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)));
      return 0;
    case 2:
      FUN_6625cd60(this,*(undefined4 *)(param_1 + 0x20));
      return 0;
    case 3:
      uVar2 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      FUN_6625ce70(this,*(undefined4 *)(param_1 + 10),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)),*(undefined4 *)(param_1 + 0x20));
      return 0;
    case 4:
      FUN_6625cf20((int)this);
      return 0;
    case 5:
      FUN_6625cfb0((int)this);
      return 0;
    case 6:
      FUN_6625c9b0((int)this);
      return 0;
    case 7:
      FUN_6625d6f0(this,*(undefined4 *)(param_1 + 0x24));
      return 0;
    case 8:
      uVar2 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      FUN_6625cc30(this,*(undefined4 *)(param_1 + 0x1a),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x28)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)),*(undefined4 *)(param_1 + 0x20));
    }
  }
  return 0;
}


