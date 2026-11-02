/* Module: sftrans1.dll
   Function: FUN_0049d200
   Address: 0049d200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049d200(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_c08 [1024];
  undefined1 local_808 [2052];
  
  FUN_0054f120(local_808,local_c08,0,0,0,0x3ff00000,0x100,param_1,0);
  iVar2 = 0;
  do {
    uVar1 = ftol();
    *(undefined1 *)(iVar2 + param_2) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


