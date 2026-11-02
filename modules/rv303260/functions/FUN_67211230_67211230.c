/* Module: rv303260.dll
   Function: FUN_67211230
   Address: 67211230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_67211230(uint *param_1,uint param_2,uint param_3,uint param_4,ulonglong *param_5,uint *param_6,
            uint param_7,uint *param_8,uint *param_9,int param_10)

{
  DAT_67216800 = FUN_6720e680();
  if (((((param_2 == (int)param_6 >> 1) && (param_3 == param_7)) && (param_4 == param_2)) &&
      ((param_8 == param_6 && (DAT_67216800 != 0)))) && (param_10 == 0)) {
    FUN_672112e0((undefined8 *)param_1,param_2,param_3,param_5,(int)param_6,param_7);
    return;
  }
  if ((((int)param_2 <= (int)param_6) && ((int)param_3 <= (int)param_7)) &&
     ((param_10 != 0 && (param_9 != (uint *)0x0)))) {
    FUN_67211380(param_1,param_2,param_3,param_4,(byte *)param_5,(uint)param_6,param_7,param_8,
                 param_9);
    return;
  }
  FUN_67211cb0((undefined1 *)param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,param_7,
               (int)param_8);
  return;
}


