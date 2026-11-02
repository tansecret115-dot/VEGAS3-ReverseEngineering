/* Module: rmbe3260.dll
   Function: FUN_66055e00
   Address: 66055e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66055e00(uint *param_1,void *param_2)

{
  char *_Dest;
  
  if (param_2 != (void *)0x0) {
    _Dest = (char *)FUN_6605bc10(param_2,0x25);
    sprintf(_Dest,s___4x__4x___4x___4x___2x__2x___2x_6606f378,*param_1 >> 0x10,
            (uint)(ushort)*param_1,(uint)(ushort)param_1[1],(uint)*(ushort *)((int)param_1 + 6),
            (uint)(byte)param_1[2],(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)(byte)param_1[3],(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
    FUN_6605bc90(param_2,-1);
  }
  return 0;
}


