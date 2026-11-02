/* Module: sfs4rw.dll
   Function: FUN_00425300
   Address: 00425300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425300(int param_1)

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


