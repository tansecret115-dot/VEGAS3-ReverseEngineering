/* Module: vegas30.exe
   Function: FUN_0057c150
   Address: 0057c150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057c150(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CHAR local_104 [260];
  
  uVar3 = 0;
  uVar2 = 0;
  DVar1 = GetCurrentProcessId();
  FUN_0057bd40(local_104,0x104,DVar1,uVar2,uVar3);
  DeleteFileA(local_104);
  return 0;
}


