/* Module: oggplug.dll
   Function: FUN_004303f0
   Address: 004303f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004303f0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  int iVar4;
  
  uVar1 = FUN_00442100(param_2,0x20);
  if (-1 < (int)uVar1) {
    puVar2 = calloc(uVar1 + 1,1);
    param_1[3] = (int)puVar2;
    FUN_004302e0(param_2,puVar2,uVar1);
    uVar1 = FUN_00442100(param_2,0x20);
    param_1[2] = uVar1;
    if (-1 < (int)uVar1) {
      pvVar3 = calloc(uVar1 + 1,4);
      *param_1 = (int)pvVar3;
      pvVar3 = calloc(param_1[2] + 1,4);
      param_1[1] = (int)pvVar3;
      iVar4 = 0;
      if (0 < param_1[2]) {
        do {
          uVar1 = FUN_00442100(param_2,0x20);
          if ((int)uVar1 < 0) goto LAB_004304ac;
          *(uint *)(param_1[1] + iVar4 * 4) = uVar1;
          pvVar3 = calloc(uVar1 + 1,1);
          *(void **)(*param_1 + iVar4 * 4) = pvVar3;
          FUN_004302e0(param_2,*(undefined1 **)(*param_1 + iVar4 * 4),uVar1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[2]);
      }
      uVar1 = FUN_00442100(param_2,1);
      if (uVar1 == 1) {
        return 0;
      }
    }
  }
LAB_004304ac:
  FUN_0042ffd0(param_1);
  return 0xffffff7b;
}


