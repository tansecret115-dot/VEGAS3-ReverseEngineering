/* Module: sfmarket2.dll
   Function: FUN_0045c130
   Address: 0045c130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045c130(int *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x51);
  sVar2 = FUN_00447c30((undefined4 *)puVar1[8],1,0x1000,(int *)puVar1[7]);
  if (sVar2 == 0) {
    if (*(char *)(puVar1 + 9) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x29;
      (**(code **)*param_1)(param_1);
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x74;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined1 *)puVar1[8] = 0xff;
    sVar2 = 2;
    *(undefined1 *)(puVar1[8] + 1) = 0xd9;
  }
  puVar1[1] = sVar2;
  *puVar1 = puVar1[8];
  *(undefined1 *)(puVar1 + 9) = 0;
  return CONCAT31((int3)(sVar2 >> 8),1);
}


