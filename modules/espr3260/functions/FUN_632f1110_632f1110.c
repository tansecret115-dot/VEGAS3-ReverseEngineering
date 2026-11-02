/* Module: espr3260.dll
   Function: FUN_632f1110
   Address: 632f1110
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __fastcall FUN_632f1110(void *param_1)

{
  FUN_632f1350(param_1,1);
  *(undefined **)((int)param_1 + 0x844) = &DAT_632fa068;
  FUN_632f1330((undefined4 *)((int)param_1 + 0x940));
  *(undefined ***)(*(int *)(*(int *)((int)param_1 + 0x844) + 4) + 0x844 + (int)param_1) =
       &PTR_FUN_632fa040;
  FUN_632f12a0((int)param_1 + 0x115c);
  *(undefined4 *)((int)param_1 + 0x5250) = 0;
  *(undefined4 *)((int)param_1 + 0x5254) = 0;
  *(undefined4 *)((int)param_1 + 0x5258) = 0;
  *(undefined4 *)((int)param_1 + 0x525c) = 0;
  *(undefined4 *)((int)param_1 + 0x5264) = 0;
  *(undefined4 *)((int)param_1 + 0x5268) = 0;
  *(undefined4 *)((int)param_1 + 0x5260) = 4;
  *(undefined2 *)((int)param_1 + 0x3526c) = 4;
  return param_1;
}


