/* Module: rv203260.dll
   Function: FUN_638b1cc0
   Address: 638b1cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_638b1cc0(uint *param_1,uint param_2,uint param_3,uint param_4,ulonglong *param_5,uint *param_6,
            uint param_7,uint *param_8,uint *param_9,int param_10)

{
  DAT_638b6710 = FUN_638af110();
  if (((((param_2 == (int)param_6 >> 1) && (param_3 == param_7)) && (param_4 == param_2)) &&
      ((param_8 == param_6 && (DAT_638b6710 != 0)))) && (param_10 == 0)) {
    FUN_638b1d70((undefined8 *)param_1,param_2,param_3,param_5,(int)param_6,param_7);
    return;
  }
  if ((((int)param_2 <= (int)param_6) && ((int)param_3 <= (int)param_7)) &&
     ((param_10 != 0 && (param_9 != (uint *)0x0)))) {
    FUN_638b1e10(param_1,param_2,param_3,param_4,(byte *)param_5,(uint)param_6,param_7,param_8,
                 param_9);
    return;
  }
  FUN_638b2740((undefined1 *)param_1,param_2,param_3,param_4,(int)param_5,(int)param_6,param_7,
               (int)param_8);
  return;
}


