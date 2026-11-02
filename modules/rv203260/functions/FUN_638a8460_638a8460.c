/* Module: rv203260.dll
   Function: FUN_638a8460
   Address: 638a8460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_638a8460(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  while( true ) {
    SetEvent(*(HANDLE *)(param_1 + 0x5c));
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x58),0xffffffff);
    if (DVar1 != 0) break;
    uVar2 = FUN_638a8580(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return 0;
}


