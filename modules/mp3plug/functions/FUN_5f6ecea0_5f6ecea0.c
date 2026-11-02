/* Module: mp3plug.dll
   Function: FUN_5f6ecea0
   Address: 5f6ecea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ecea0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_5f72a200();
  FUN_5f705390((uint *)*param_1,(undefined4 *)&stack0xfffffffc,0x400,0x4f0);
  FUN_5f705a70((undefined4 *)param_1[4],(float *)&stack0xfffffffc);
  FUN_5f7072b0((float *)&stack0xfffffffc,0x400);
  FUN_5f7057c0((uint *)param_1[2],(undefined4 *)&stack0xfffffffc);
  FUN_5f705250((uint *)*param_1,param_2,0x240);
  FUN_5f705390((uint *)*param_1,(undefined4 *)&stack0x00000ffc,0x240,0x240);
  FUN_5f706450(param_1[7],(int)&stack0x00000ffc,(int)&stack0x000018fc);
  FUN_5f705250((uint *)param_1[1],(undefined4 *)&stack0x000018fc,0x240);
  iVar1 = -0xc;
  do {
    FUN_5f705390((uint *)*param_1,(undefined4 *)&stack0x000021fc,0x100,
                 -(*(int *)(iVar1 + 0x5f74186c) + -0x80));
    FUN_5f705a70((undefined4 *)param_1[5],(float *)&stack0x000021fc);
    FUN_5f7072b0((float *)&stack0x000021fc,0x100);
    FUN_5f7057c0((uint *)param_1[3],(undefined4 *)&stack0x000021fc);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  FUN_5f705ed0((int *)param_1[6],param_1[3],param_1 + 8);
  return 0;
}


