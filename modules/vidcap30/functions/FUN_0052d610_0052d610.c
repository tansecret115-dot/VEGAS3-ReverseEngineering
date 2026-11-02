/* Module: vidcap30.exe
   Function: FUN_0052d610
   Address: 0052d610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052d610(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = 4;
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 *)(param_1 + 8),&param_1,4,local_4);
  if ((iVar1 != 0) && ((iVar2 == 0x4034b50 || (iVar2 == 0x30304b50)))) {
    return 0;
  }
  return 1;
}


