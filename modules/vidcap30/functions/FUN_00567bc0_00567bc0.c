/* Module: vidcap30.exe
   Function: FUN_00567bc0
   Address: 00567bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567bc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  *(undefined4 **)(param_1 + 0x189) = puVar1;
  *puVar1 = &LAB_00567c00;
  puVar1 = puVar1 + 0xb;
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[0xc] = 0;
    puVar1[8] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


