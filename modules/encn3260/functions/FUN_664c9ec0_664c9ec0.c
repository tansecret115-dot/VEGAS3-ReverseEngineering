/* Module: encn3260.dll
   Function: FUN_664c9ec0
   Address: 664c9ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c9ec0(int param_1)

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
      FUN_664c8490(this,*(undefined4 *)(param_1 + 10),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)));
      return 0;
    case 1:
      FUN_664c8740(this,*(undefined4 *)(param_1 + 0x1a),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)));
      return 0;
    case 2:
      FUN_664c8a10(this,*(undefined4 *)(param_1 + 0x20));
      return 0;
    case 3:
      uVar2 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      FUN_664c8b20(this,*(undefined4 *)(param_1 + 10),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)),*(undefined4 *)(param_1 + 0x20));
      return 0;
    case 4:
      FUN_664c8bd0((int)this);
      return 0;
    case 5:
      FUN_664c8c60((int)this);
      return 0;
    case 6:
      FUN_664c8660((int)this);
      return 0;
    case 7:
      FUN_664c93a0(this,*(undefined4 *)(param_1 + 0x24));
      return 0;
    case 8:
      uVar2 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      FUN_664c88e0(this,*(undefined4 *)(param_1 + 0x1a),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x1e)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x28)),
                   CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x16)),*(undefined4 *)(param_1 + 0x20));
    }
  }
  return 0;
}


