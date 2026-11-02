/* Module: vegas30k.dll
   Function: FUN_0115ecf0
   Address: 0115ecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0115ecf0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x51);
  iVar2 = FUN_01129070(puVar1[8],1,0x1000,puVar1[7]);
  if (iVar2 == 0) {
    if (*(char *)(puVar1 + 9) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x29;
      (**(code **)*param_1)(param_1);
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x74;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined1 *)puVar1[8] = 0xff;
    iVar2 = 2;
    *(undefined1 *)(puVar1[8] + 1) = 0xd9;
  }
  puVar1[1] = iVar2;
  *puVar1 = puVar1[8];
  *(undefined1 *)(puVar1 + 9) = 0;
  return 1;
}


