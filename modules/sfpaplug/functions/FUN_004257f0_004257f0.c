/* Module: sfpaplug.dll
   Function: FUN_004257f0
   Address: 004257f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004257f0(uint param_1,DWORD param_2,DWORD param_3,int param_4,int param_5)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD unaff_retaddr;
  HANDLE in_stack_00001024;
  int in_stack_00001028;
  uint *in_stack_0000102c;
  int in_stack_00001030;
  
  FUN_0044bad0();
  if (in_stack_0000102c != (uint *)0x0) {
    *in_stack_0000102c = 0;
  }
  SetFilePointer(in_stack_00001024,0,(PLONG)0x0,0);
  FUN_004253f0(in_stack_00001024,&param_5,(undefined4 *)&stack0x0000001c);
  param_4 = param_5;
  if (in_stack_00001030 == 0) {
    uVar1 = FUN_004254a0(in_stack_00001024,in_stack_00001028,&param_1,&param_4);
  }
  else {
    uVar1 = FUN_004255c0(in_stack_00001024,in_stack_00001028,(int *)&param_1,&param_4);
  }
  if (-1 < (int)uVar1) {
    if ((param_1 & 1) != 0) {
      param_1 = param_1 + 1;
    }
    uVar1 = param_1 + 8;
    if (in_stack_00001030 != 0) {
      uVar1 = param_1 + 0xc;
    }
    param_1 = uVar1;
    FUN_00424e20(in_stack_00001024,(DWORD *)&stack0x00000000);
    DVar3 = unaff_retaddr - 8;
    if (in_stack_00001030 != 0) {
      DVar3 = unaff_retaddr - 0xc;
    }
    param_2 = DVar3 + param_1;
    FUN_00424e40(in_stack_00001024,param_2);
    while( true ) {
      BVar2 = ReadFile(in_stack_00001024,&stack0x00000020,0x1000,&param_3,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return 0x8004e008;
      }
      FUN_00424e20(in_stack_00001024,&param_2);
      FUN_00424e40(in_stack_00001024,DVar3);
      BVar2 = WriteFile(in_stack_00001024,&stack0x00000020,param_3,(LPDWORD)&stack0x00000018,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return 0x8004e009;
      }
      FUN_00424e20(in_stack_00001024,(DWORD *)&stack0x00000000);
      if (param_3 < 0x1000) break;
      FUN_00424e40(in_stack_00001024,param_2);
    }
    SetEndOfFile(in_stack_00001024);
    FUN_00425080(in_stack_00001024,-param_1);
    if (in_stack_0000102c != (uint *)0x0) {
      *in_stack_0000102c = param_1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


