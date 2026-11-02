/* Module: pncrt.dll
   Function: isleadbyte
   Address: 780176b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl isleadbyte(int _C)

{
                    /* 0x176b0  639  isleadbyte */
  return *(ushort *)(_pctype + (_C & 0xffU) * 2) & 0x8000;
}


