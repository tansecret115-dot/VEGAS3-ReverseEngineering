/* Module: vidcap30.exe
   Function: FUN_0055f050
   Address: 0055f050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f050(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x16);
  *(undefined4 **)(param_1 + 0x1a9) = puVar1;
  *puVar1 = FUN_0055f300;
  puVar1[1] = &LAB_0055f460;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_0055f080(param_1);
  return;
}


