/* Module: sfpagepeel.dll
   Function: GetPixelAspect
   Address: 00411380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: double __thiscall CSfSurface::GetPixelAspect(void) */

double __thiscall CSfSurface::GetPixelAspect(CSfSurface *this)

{
                    /* 0x11380  7  ?GetPixelAspect@CSfSurface@@QAENXZ */
  return *(double *)(this + 0x440);
}


