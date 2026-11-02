/* Module: erv23260.dll
   Function: FUN_637ffc60
   Address: 637ffc60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637ffc60(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined4 *)(param_2 + -0x18 + (int)param_1);
  *(undefined4 **)((int)this + 0xc) = puVar2;
  if (((((uint)puVar2 & 3) == 0) && (param_1 < puVar2)) &&
     ((puVar2[2] == 0x33363248 || (puVar2[2] == 0x50333632)))) {
    *(undefined4 *)((int)this + 0x28) = *puVar2;
    *(undefined4 *)((int)this + 0x2c) = puVar2[1];
    *(undefined4 *)((int)this + 0x30) = puVar2[2];
    *(undefined4 *)((int)this + 0x20) = puVar2[4];
    *(uint *)((int)this + 0x38) = (uint)*(byte *)(puVar2 + 5);
    *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)((int)puVar2 + 0x15);
    *(undefined1 *)((int)this + 0x3d) = *(undefined1 *)((int)puVar2 + 0x16);
    *(undefined1 *)((int)this + 0x3e) = *(undefined1 *)((int)puVar2 + 0x17);
    if (*(int *)((int)this + 0x30) == 0x50333632) {
      puVar1 = puVar2 + -1;
      *(undefined4 **)((int)this + 0x10) = puVar1;
      *(undefined1 *)((int)this + 0x3f) = *(undefined1 *)puVar1;
      *(undefined1 *)((int)this + 0x40) = *(undefined1 *)((int)puVar2 - 3);
      *(undefined1 *)((int)this + 0x41) = *(undefined1 *)((int)puVar2 - 2);
      *(undefined1 *)((int)this + 0x42) = *(undefined1 *)((int)puVar2 - 1);
      puVar4 = (undefined1 *)((int)puVar1 + (*(int *)((int)this + 0x20) * -8 - (int)param_1));
      puVar3 = (undefined1 *)puVar2[3];
      if (puVar4 <= (undefined1 *)puVar2[3]) {
        *(undefined1 **)((int)this + 0x34) = puVar4;
        return 1;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 0;
      puVar4 = (undefined1 *)((int)puVar2 + (*(int *)((int)this + 0x20) * -0x10 - (int)param_1));
      puVar3 = (undefined1 *)puVar2[3];
      if (puVar4 <= (undefined1 *)puVar2[3]) {
        puVar3 = puVar4;
      }
    }
    *(undefined1 **)((int)this + 0x34) = puVar3;
    return 1;
  }
  return 0;
}


